//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface LLWeakDelegates : NSObject
{
    NSHashTable *_delegates;
    id _devDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id devDelegate; // @synthesize devDelegate=_devDelegate;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)init;

@end
