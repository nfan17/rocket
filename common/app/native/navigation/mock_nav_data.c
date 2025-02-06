
#include "mock_nav_data.h"

bool MockNavDataInit(NavData* data, MockNavData* mock, const char* path)
{
    mock->fp = fopen(path, "r");

    if (!mock->fp)
    {
        printf("File not found!\n");
        return false;
    }
    printf("File found: %s\n", path);

    data->priv = (void*)mock;
    data->update = MockNavDataUpdate;
}

void MockNavDataDeinit(NavData* data)
{
    MockNavData* mock = (MockNavData*)data->priv;
    fclose(mock->fp);
}

bool MockNavDataUpdate(NavData* data)
{
    MockNavData* mock = (MockNavData*)data->priv;
    char buf[256];
    if (fgets(buf, 256, mock->fp))
    {
        char* value = strtok(buf, ",");
        size_t idx = 0;
        while (value)
        {
            switch (idx)
            {
                case 0:
                    sscanf(value, "%f", &data->pressure);
                    break;
                case 1:
                    sscanf(value, "%f", &data->accel.x);
                    break;
                case 2:
                    sscanf(value, "%f", &data->accel.y);
                    break;
                case 3:
                    sscanf(value, "%f", &data->accel.z);
                    break;
                case 4:
                    sscanf(value, "%d", &data->euler.x);
                    break;
                case 5:
                    sscanf(value, "%d", &data->euler.y);
                    break;
                case 6:
                    sscanf(value, "%d", &data->euler.z);
                    break;
                default:
                    return false;
                    break;
            }

            value = strtok(NULL, ",");
            idx++;
        }

        return true;
    }
    printf("No more data available in file!");

    return false;
}