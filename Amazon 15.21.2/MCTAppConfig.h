//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCTAppConfigTesting-Protocol.h"

@class NSMutableDictionary;

@interface MCTAppConfig : NSObject <MCTAppConfigTesting>
{
    NSMutableDictionary *_appConfig;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *appConfig; // @synthesize appConfig=_appConfig;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;

@end

