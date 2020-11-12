//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;
@protocol GIPAccountID;

@protocol DYNDeveloperSettingsService <NSObject>
@property(nonatomic) _Bool gilVisualizerEnabled;
@property(retain, nonatomic) NSString *surveyURLStringOverride;
@property(nonatomic) int spacesSupportLevel;
@property(nonatomic) int directMessagesSupportLevel;
@property(nonatomic) _Bool supplementNotificationsEnabled;
@property(nonatomic) _Bool renderAllRoomsAsPostRoomsEnabled;
@property(nonatomic) _Bool openSearchBarRefactorEnabled;
@property(nonatomic) _Bool splitTabletExperienceEnabled;
@property(nonatomic) _Bool guestAccessNewUIEnabled;
@property(nonatomic) _Bool multipleAccountsEnabled;
@property(retain, nonatomic) NSString *appVersionOverride;
- (UIViewController *)developerSettingsViewControllerWithAccountID:(id <GIPAccountID>)arg1;
@end
