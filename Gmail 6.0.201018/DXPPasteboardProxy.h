//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@protocol DXPPasteboardProxyDelegate;

@interface DXPPasteboardProxy : NSProxy
{
    _Bool _needsUpdate;
    id <DXPPasteboardProxyDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) __weak id <DXPPasteboardProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (id)queryTypesForSelector:(SEL)arg1;
- (id)typeArraysWithRemovedPrefix:(id)arg1 fromTypeArrays:(id)arg2;
- (id)typesWithAddedPrefix:(id)arg1 toTypes:(id)arg2;
- (id)typesWithRemovedPrefix:(id)arg1 fromTypes:(id)arg2;
- (_Bool)handledPrefixedPasteboardWithInvocation:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithDelegate:(id)arg1 needsUpdate:(_Bool)arg2;

@end
