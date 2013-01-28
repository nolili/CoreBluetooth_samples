//
//  ViewController.h
//  KeyFobSample
//
//  Created by akihiro uehara on 2013/01/15.
//  Copyright (c) 2013年 wa-fu-u, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@property (weak, nonatomic) IBOutlet UILabel *RSSITextLabel;
@property (weak, nonatomic) IBOutlet UILabel *SwitchTextLabel;
@property (weak, nonatomic) IBOutlet UILabel *switch1StatusTextLabel;
@property (weak, nonatomic) IBOutlet UILabel *switch2StatusTextLabel;

@property (weak, nonatomic) IBOutlet UILabel *BatteryTextLabel;
@property (weak, nonatomic) IBOutlet UIProgressView *RSSIProgressBar;
@property (weak, nonatomic) IBOutlet UIProgressView *BatteryProgressBar;
@property (weak, nonatomic) IBOutlet UILabel *RSSIValueTextLabel;
@property (weak, nonatomic) IBOutlet UILabel *BatteryValueTextLabel;
@property (weak, nonatomic) IBOutlet UILabel *BatteryPercentTextLabel;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *ScanActivityIndicator;
@property (weak, nonatomic) IBOutlet UIButton *ScanButton;

- (IBAction)scanButtonTouchUpInside:(id)sender;

@end
