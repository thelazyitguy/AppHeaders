//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@protocol GOOSideViewProfile, GOOSideViewProfileDataSource;

@protocol GOOSideViewProfileContainerDelegate <NSObject>
- (void)profileDataSource:(id <GOOSideViewProfileDataSource>)arg1 didChangeProfile:(id <GOOSideViewProfile>)arg2 atIndex:(long long)arg3;
- (void)numberOfProfilesChangedForProfileDataSource:(id <GOOSideViewProfileDataSource>)arg1;
@end

