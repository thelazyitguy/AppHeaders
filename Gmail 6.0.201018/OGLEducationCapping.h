//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface OGLEducationCapping : NSObject
{
}

+ (id)sharedInstance;
- (void)setFlagValueForForEducationKey:(id)arg1 account:(id)arg2;
- (_Bool)flagValueForEducationKey:(id)arg1 account:(id)arg2;
@property(readonly, nonatomic) NSUserDefaults *userDefaults;
- (void)shouldShowObakeHighlightForAccount:(id)arg1 profileSource:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldShowCriticalAlertApdHighlightForBadgeContent:(id)arg1;

@end

