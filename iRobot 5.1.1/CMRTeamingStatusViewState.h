//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMRAlertDialogViewState, NSString;

@interface CMRTeamingStatusViewState : NSObject
{
    _Bool _showLoading;
    NSString *_configuration;
    NSString *_primaryAssetSku;
    NSString *_primaryAssetLabelResId;
    NSString *_secondaryAssetSku;
    NSString *_secondaryAssetName;
    NSString *_secondaryAssetLabelResId;
    NSString *_secondaryAssetCleaningLocation;
    CMRAlertDialogViewState *_alertDialogViewState;
}

+ (id)TeamingStatusViewStateWithConfiguration:(id)arg1 primaryAssetSku:(id)arg2 primaryAssetLabelResId:(id)arg3 secondaryAssetSku:(id)arg4 secondaryAssetName:(id)arg5 secondaryAssetLabelResId:(id)arg6 secondaryAssetCleaningLocation:(id)arg7 showLoading:(_Bool)arg8 alertDialogViewState:(id)arg9;
- (void).cxx_destruct;
@property(readonly, nonatomic) CMRAlertDialogViewState *alertDialogViewState; // @synthesize alertDialogViewState=_alertDialogViewState;
@property(readonly, nonatomic) _Bool showLoading; // @synthesize showLoading=_showLoading;
@property(readonly, nonatomic) NSString *secondaryAssetCleaningLocation; // @synthesize secondaryAssetCleaningLocation=_secondaryAssetCleaningLocation;
@property(readonly, nonatomic) NSString *secondaryAssetLabelResId; // @synthesize secondaryAssetLabelResId=_secondaryAssetLabelResId;
@property(readonly, nonatomic) NSString *secondaryAssetName; // @synthesize secondaryAssetName=_secondaryAssetName;
@property(readonly, nonatomic) NSString *secondaryAssetSku; // @synthesize secondaryAssetSku=_secondaryAssetSku;
@property(readonly, nonatomic) NSString *primaryAssetLabelResId; // @synthesize primaryAssetLabelResId=_primaryAssetLabelResId;
@property(readonly, nonatomic) NSString *primaryAssetSku; // @synthesize primaryAssetSku=_primaryAssetSku;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfiguration:(id)arg1 primaryAssetSku:(id)arg2 primaryAssetLabelResId:(id)arg3 secondaryAssetSku:(id)arg4 secondaryAssetName:(id)arg5 secondaryAssetLabelResId:(id)arg6 secondaryAssetCleaningLocation:(id)arg7 showLoading:(_Bool)arg8 alertDialogViewState:(id)arg9;

@end
