//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NFCWObject.h>

@class NSString;

@interface NFCWLaunchOptions : NFCWObject
{
}

- (id)initWithLanguageCode:(id)arg1 relaunchIfRunning:(_Bool)arg2;
- (id)initWithRelaunchIfRunning:(_Bool)arg1;
- (id)init;
@property(nonatomic) _Bool relaunchIfRunning;
@property(copy, nonatomic) NSString *languageCode;

@end
