//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTStreamzAdRendererType-Protocol.h>

@class GSZCounter, NSString;
@protocol GSZStreamzService;

@interface YTStreamzAdRendererType : NSObject <YTStreamzAdRendererType>
{
    id <GSZStreamzService> _streamzService;
    GSZCounter *_counter;
}

- (void).cxx_destruct;
- (void)incrementBy:(long long)arg1 withUseAbr:(_Bool)arg2 type:(id)arg3;
- (void)incrementWithUseAbr:(_Bool)arg1 type:(id)arg2;
- (id)initWithStreamzService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

