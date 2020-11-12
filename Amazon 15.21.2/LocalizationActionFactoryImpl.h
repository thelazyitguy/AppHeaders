//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMILocalizationActionFactory-Protocol.h"

@class NSMutableDictionary;

@interface LocalizationActionFactoryImpl : NSObject <AMILocalizationActionFactory>
{
    NSMutableDictionary *_registry;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (void)registerActionClass:(Class)arg1 forStartupAction:(id)arg2;
- (id)createAction:(id)arg1 withParams:(id)arg2;
- (id)init;

@end
