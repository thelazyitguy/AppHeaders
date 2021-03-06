//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

@class YTAppSettingsStore, YTICommand, YTSettingsPickerViewController;
@protocol YTResponder;

@interface YTPlayAsYouBrowseSettingsViewController : YTStyledViewController
{
    YTAppSettingsStore *_appSettings;
    YTSettingsPickerViewController *_settingsPickerViewController;
    id <YTResponder> _parentResponder;
    YTICommand *_navEndpoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTICommand *navEndpoint; // @synthesize navEndpoint=_navEndpoint;
- (id)parentResponder;
- (void)dismiss;
- (id)settingsPickerViewController;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithParentResponder:(id)arg1;

@end

