//
//  ViewController.h
//  UIImage Scanline Floodfill
//
//  Created by chintan on 15/07/13.
//  Copyright (c) 2013 ZWT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImage+FloodFill.h"
#import "FloodFillImageView.h"

@interface PaintVC : UIViewController

@property (strong, nonatomic) IBOutlet FloodFillImageView *imageView;
@property (strong, nonatomic) IBOutlet UITextField *txtTolerance;

- (IBAction)btnSetTap:(UIButton *)sender;

- (IBAction)btnColorTap:(UIButton *)sender;

@end
