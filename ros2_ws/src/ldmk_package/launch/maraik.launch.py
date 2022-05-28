from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ldmk_package',
            executable='roboticsIK',
            output='screen'),

        Node(
            package='ldmk_package',
            executable='fingersclient',
            output='screen'),

    ])
