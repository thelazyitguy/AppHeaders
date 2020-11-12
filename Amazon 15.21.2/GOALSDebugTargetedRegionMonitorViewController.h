//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class GOALSDebugLogger, GOALSRegionMonitoringClient, NSString, UIColor, UILabel, UITextField;
@protocol GOALSRegionMonitoringClientProvider;

@interface GOALSDebugTargetedRegionMonitorViewController : UIViewController <UITextFieldDelegate>
{
    GOALSDebugLogger *_debugLogger;
    id <GOALSRegionMonitoringClientProvider> _goalsRegionMonitoringClientProvider;
    GOALSRegionMonitoringClient *_goalsRegionMonitoringClient;
    UILabel *_callbackStatus;
    UIColor *_successColor;
    UIColor *_failureColor;
    UITextField *_targetedRMIdTextField;
    UITextField *_baseRMIdTextField;
    UITextField *_clientIdTextField;
    UITextField *_featureIdTextField;
    UITextField *_regionTokenField;
    UITextField *_latitudeTextField;
    UITextField *_longitudeTextField;
    UITextField *_radiusTextField;
}

@property(retain, nonatomic) UITextField *radiusTextField; // @synthesize radiusTextField=_radiusTextField;
@property(retain, nonatomic) UITextField *longitudeTextField; // @synthesize longitudeTextField=_longitudeTextField;
@property(retain, nonatomic) UITextField *latitudeTextField; // @synthesize latitudeTextField=_latitudeTextField;
@property(retain, nonatomic) UITextField *regionTokenField; // @synthesize regionTokenField=_regionTokenField;
@property(retain, nonatomic) UITextField *featureIdTextField; // @synthesize featureIdTextField=_featureIdTextField;
@property(retain, nonatomic) UITextField *clientIdTextField; // @synthesize clientIdTextField=_clientIdTextField;
@property(retain, nonatomic) UITextField *baseRMIdTextField; // @synthesize baseRMIdTextField=_baseRMIdTextField;
@property(retain, nonatomic) UITextField *targetedRMIdTextField; // @synthesize targetedRMIdTextField=_targetedRMIdTextField;
@property(retain, nonatomic) UIColor *failureColor; // @synthesize failureColor=_failureColor;
@property(retain, nonatomic) UIColor *successColor; // @synthesize successColor=_successColor;
@property(retain, nonatomic) UILabel *callbackStatus; // @synthesize callbackStatus=_callbackStatus;
@property(retain, nonatomic) GOALSRegionMonitoringClient *goalsRegionMonitoringClient; // @synthesize goalsRegionMonitoringClient=_goalsRegionMonitoringClient;
@property(retain, nonatomic) id <GOALSRegionMonitoringClientProvider> goalsRegionMonitoringClientProvider; // @synthesize goalsRegionMonitoringClientProvider=_goalsRegionMonitoringClientProvider;
@property(retain, nonatomic) GOALSDebugLogger *debugLogger; // @synthesize debugLogger=_debugLogger;
- (void).cxx_destruct;
- (double)convertStringToDouble:(id)arg1;
- (id)getApplicationInstallId;
- (CDUnknownBlockType)createErrorLoggerForMethod:(id)arg1;
- (CDUnknownBlockType)createSuccessLoggerForMethodRefreshRegions;
- (CDUnknownBlockType)createSuccessLoggerForMethodPutTargetedRegionMonitor:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)instantiateRegionMonitoringClient;
- (void)refreshRegionMonitors;
- (id)createTextViewWithTitle:(id)arg1;
- (id)createButtonWithTitle:(id)arg1 action:(SEL)arg2 backgroundColor:(id)arg3;
- (id)rgbColorWithRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
- (void)setupScrollView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
