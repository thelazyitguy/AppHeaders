//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMRAlertDialogViewState, CMRLocalizedStringDescriptor, NSArray, NSString;

@interface CMRAutomationConnectionPreferencesViewState : NSObject
{
    _Bool _isUpdateInProgress;
    int _deviceSignalSelectedIndex;
    int _deviceSelectedIndex;
    NSString *_configuration;
    CMRLocalizedStringDescriptor *_headerTitle;
    NSArray *_connectionPreferenceSectionList;
    NSArray *_deviceSignalList;
    NSArray *_deviceList;
    CMRAlertDialogViewState *_errorDialog;
}

+ (id)AutomationConnectionPreferencesViewStateWithConfiguration:(id)arg1 headerTitle:(id)arg2 connectionPreferenceSectionList:(id)arg3 deviceSignalList:(id)arg4 deviceSignalSelectedIndex:(int)arg5 deviceList:(id)arg6 deviceSelectedIndex:(int)arg7 isUpdateInProgress:(_Bool)arg8 errorDialog:(id)arg9;
- (void).cxx_destruct;
@property(readonly, nonatomic) CMRAlertDialogViewState *errorDialog; // @synthesize errorDialog=_errorDialog;
@property(readonly, nonatomic) _Bool isUpdateInProgress; // @synthesize isUpdateInProgress=_isUpdateInProgress;
@property(readonly, nonatomic) int deviceSelectedIndex; // @synthesize deviceSelectedIndex=_deviceSelectedIndex;
@property(readonly, nonatomic) NSArray *deviceList; // @synthesize deviceList=_deviceList;
@property(readonly, nonatomic) int deviceSignalSelectedIndex; // @synthesize deviceSignalSelectedIndex=_deviceSignalSelectedIndex;
@property(readonly, nonatomic) NSArray *deviceSignalList; // @synthesize deviceSignalList=_deviceSignalList;
@property(readonly, nonatomic) NSArray *connectionPreferenceSectionList; // @synthesize connectionPreferenceSectionList=_connectionPreferenceSectionList;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfiguration:(id)arg1 headerTitle:(id)arg2 connectionPreferenceSectionList:(id)arg3 deviceSignalList:(id)arg4 deviceSignalSelectedIndex:(int)arg5 deviceList:(id)arg6 deviceSelectedIndex:(int)arg7 isUpdateInProgress:(_Bool)arg8 errorDialog:(id)arg9;

@end
