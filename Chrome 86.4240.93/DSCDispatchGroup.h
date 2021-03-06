//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_group;

@interface DSCDispatchGroup : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)wait;
- (_Bool)waitWithTimeout:(double)arg1;
- (void)notifyOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)leave;
- (void)enter;
- (id)initWithName:(id)arg1;

@end

