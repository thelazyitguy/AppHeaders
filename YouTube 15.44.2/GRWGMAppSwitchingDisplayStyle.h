//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GRWAppSwitchingDisplayStyle-Protocol.h>

@class NSString, UIImage;

@interface GRWGMAppSwitchingDisplayStyle : NSObject <GRWAppSwitchingDisplayStyle>
{
}

@property(readonly, nonatomic) UIImage *shareIcon;
@property(readonly, nonatomic) UIImage *editIcon;
- (id)appSwitchingFloatingButtonWithPrimaryColor:(id)arg1 backgroundColor:(id)arg2 title:(id)arg3 icon:(id)arg4;
- (id)appSwitchingFeaturedAppActionButton;
- (id)appSwitchingFeaturedAppIconImageView;
- (id)appSwitchingSettingsCellActionButton;
- (id)appSwitchingCellActionButton;
@property(readonly, nonatomic) unsigned long long appSwitchingSettingsCollectionViewStyle;
@property(readonly, nonatomic) _Bool appSwitchingSettingsHidesFooterSeparators;
@property(readonly, nonatomic) _Bool appSwitchingHidesCellSeparators;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

