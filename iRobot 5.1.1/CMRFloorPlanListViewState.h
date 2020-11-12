//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMRActionSheetDialogViewState, CMRAlertDialogViewState, CMRLocalizedStringDescriptor, NSArray, NSString;

@interface CMRFloorPlanListViewState : NSObject
{
    NSString *_configuration;
    NSString *_introId;
    NSArray *_sections;
    CMRLocalizedStringDescriptor *_emptyListDescriptionId;
    NSString *_listInfoId;
    NSArray *_contextMenuItems;
    CMRActionSheetDialogViewState *_mapMenuViewState;
    CMRAlertDialogViewState *_alertDialogViewState;
}

+ (id)FloorPlanListViewStateWithConfiguration:(id)arg1 introId:(id)arg2 sections:(id)arg3 emptyListDescriptionId:(id)arg4 listInfoId:(id)arg5 contextMenuItems:(id)arg6 mapMenuViewState:(id)arg7 alertDialogViewState:(id)arg8;
- (void).cxx_destruct;
@property(readonly, nonatomic) CMRAlertDialogViewState *alertDialogViewState; // @synthesize alertDialogViewState=_alertDialogViewState;
@property(readonly, nonatomic) CMRActionSheetDialogViewState *mapMenuViewState; // @synthesize mapMenuViewState=_mapMenuViewState;
@property(readonly, nonatomic) NSArray *contextMenuItems; // @synthesize contextMenuItems=_contextMenuItems;
@property(readonly, nonatomic) NSString *listInfoId; // @synthesize listInfoId=_listInfoId;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *emptyListDescriptionId; // @synthesize emptyListDescriptionId=_emptyListDescriptionId;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) NSString *introId; // @synthesize introId=_introId;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfiguration:(id)arg1 introId:(id)arg2 sections:(id)arg3 emptyListDescriptionId:(id)arg4 listInfoId:(id)arg5 contextMenuItems:(id)arg6 mapMenuViewState:(id)arg7 alertDialogViewState:(id)arg8;

@end
