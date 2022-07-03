# AutoDataUpdater
Database related plugin for Unreal Engine 4. This plugin reads from external csv files, looks for assets with the matching name, and updates their variable values as specified in the data.

I find Unreal Engine's data table is not very friendly to update, especially when dealing with a large number of data, so I made the data into a csv.

# Instructions

- The plugin assumes the first row as asset names, and the first column as variable names.

![01](https://user-images.githubusercontent.com/9084754/175922496-6d9cb7c8-c95a-4d6c-83a0-8149b38d6aed.png)

- Fill up the filepaths to the csv under Project Settings... > Plugins > Auto Data Updater. By default the plugin will add the path to the project before the list; untick the Auto Append Project Path to use absolute path.

![image](https://user-images.githubusercontent.com/9084754/175924964-2f4f2d86-ccbf-44b8-ad7f-76459fdd4de9.png)

- Click the Auto Data Updater button under the Window menu. If there are any issues, it will be printed in the output log.

![image](https://user-images.githubusercontent.com/9084754/175923891-a15f219b-79fb-4123-a361-e72ca5cbb564.png)

- Currently the plugin supports these variable types: boolean, integer (int32), float, String, Name, and asset (as Soft Object Path).

# Known Issues

The updater will be unable to read if the file is opened in excel. Make sure to close it first before running the updater.

# License

The plugin is licensed under MIT license. Feel free to fork and modify it as you need. The plugin icon is from Google's noto-emoji which is under Apache License 2.0.
