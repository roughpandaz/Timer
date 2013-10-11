//
//  ViewController.h
//  TimerV2
//
//  Created by Don Zhang on 13-10-10.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBTickView.h"
#import "SBTickerView.h"

@interface ViewController : UIViewController{
    NSString *_currentClock;
    NSArray *_clockTickers;
}

@property (nonatomic, strong) IBOutlet SBTickerView *fullTickerView;
@property (nonatomic, strong) IBOutlet SBTickerView *imageTickerView;
@property (strong, nonatomic) IBOutlet SBTickerView *clockTickerViewHour1;
@property (nonatomic, strong) IBOutlet SBTickerView *clockTickerViewHour2;
@property (nonatomic, strong) IBOutlet SBTickerView *clockTickerViewMinute1;
@property (nonatomic, strong) IBOutlet SBTickerView *clockTickerViewMinute2;
@property (nonatomic, strong) IBOutlet SBTickerView *clockTickerViewSecond1;
@property (nonatomic, strong) IBOutlet SBTickerView *clockTickerViewSecond2;

@property (strong, nonatomic) IBOutlet SBTickerView *clockTickerViewDay2;
@property (strong, nonatomic) IBOutlet SBTickerView *clockTickerViewDay1;
@property (strong, nonatomic) IBOutlet SBTickerView *clockTickerViewWeek2;
@property (strong, nonatomic) IBOutlet SBTickerView *clockTickerViewWeek1;

@property (nonatomic, strong) IBOutlet UIView *frontView;
@property (nonatomic, strong) IBOutlet UIView *backView;

@property (nonatomic, weak) NSString *startDate;
@property (nonatomic, weak) NSString *endDate;


@property (nonatomic) NSInteger weeks;
@property (nonatomic) NSInteger days;
@property (nonatomic) NSInteger hours;
@property (nonatomic) NSInteger minutes;
@property (nonatomic) NSInteger seconds;
@property (nonatomic) BOOL timer;

- (IBAction)tick:(id)sender;
@end
