//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGSafeMutableArray, NSArray, NSString;

@interface IBGCurrentDeviceLocale : NSObject
{
    NSString *_userSetLocale;
    IBGSafeMutableArray *_safeListenersArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IBGSafeMutableArray *safeListenersArray; // @synthesize safeListenersArray=_safeListenersArray;
@property(copy, nonatomic) NSString *userSetLocale; // @synthesize userSetLocale=_userSetLocale;
- (void).cxx_destruct;
- (void)removeAllListeners;
- (void)notifyListenersForLocale:(id)arg1;
@property(readonly, nonatomic) NSArray *listeners;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, copy, nonatomic) NSString *currentOrSystemLocale;
- (void)setCurrentLocale:(id)arg1;
- (id)init;

@end

