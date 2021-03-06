//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class UILabel, UISwitch;
@protocol ARTRightToLeftService;

@interface ARTRightToLeftDebugOptionsTableViewController : UITableViewController
{
    UILabel *_rightToLeftStatusLabel;
    UISwitch *_rightToLeftDebugSwitch;
    id <ARTRightToLeftService> _rightToLeftService;
}

@property(retain, nonatomic) id <ARTRightToLeftService> rightToLeftService; // @synthesize rightToLeftService=_rightToLeftService;
@property(nonatomic) __weak UISwitch *rightToLeftDebugSwitch; // @synthesize rightToLeftDebugSwitch=_rightToLeftDebugSwitch;
@property(nonatomic) __weak UILabel *rightToLeftStatusLabel; // @synthesize rightToLeftStatusLabel=_rightToLeftStatusLabel;
- (void).cxx_destruct;
- (id)text:(id)arg1 withAppendingEnabledForStatus:(_Bool)arg2;
- (id)attributedStringWithText:(id)arg1 color:(id)arg2 lineHeight:(double)arg3 isBold:(_Bool)arg4;
- (void)updateStatusLabel;
- (void)rightToLeftDebugSwitchValueChanged:(id)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

