//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTSettingsSectionController.h>

#import "YTOfflineStorageUsageControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSString, YTOfflineStorageUsageController;
@protocol YTResponder;

@interface YTOfflineSettingsSectionController : YTSettingsSectionController <YTResponder, YTOfflineStorageUsageControllerDelegate>
{
    struct CGSize _currentStorageCellSize;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTOfflineStorageUsageController *_storageUsageController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTOfflineStorageUsageController *storageUsageController; // @synthesize storageUsageController=_storageUsageController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (long long)storageCellIndex;
- (struct CGSize)sizeForStorageCellWithSize:(struct CGSize)arg1;
- (void)didUpdateOfflineStorageUsage;
- (void)didSelectItemAtIndex:(long long)arg1 fromView:(id)arg2;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 withSize:(struct CGSize)arg2;
- (void)updateCell:(id)arg1 forIndex:(long long)arg2;
- (Class)cellClassForItemAtIndex:(long long)arg1;
- (id)cellClassesToRegister;
- (long long)numberOfItems;
- (id)initWithTitle:(id)arg1 items:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

