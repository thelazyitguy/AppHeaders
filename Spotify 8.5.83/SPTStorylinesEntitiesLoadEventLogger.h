//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTStorylinesLoadEventLogger;

@interface SPTStorylinesEntitiesLoadEventLogger : NSObject
{
    SPTStorylinesLoadEventLogger *_loadEventLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTStorylinesLoadEventLogger *loadEventLogger; // @synthesize loadEventLogger=_loadEventLogger;
- (void)logEntitiesLoadEventForType:(long long)arg1 fromSource:(long long)arg2 withDetails:(id)arg3;
- (void)logEntitiesLoadErrorEventFromSource:(long long)arg1 withDetails:(id)arg2;
- (void)logEntitiesLoadSuccessEventFromSource:(long long)arg1;
- (void)logEntitiesLoadingEvent;
- (id)initWithLoadEventLogger:(id)arg1;

@end
