//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC18ElectrodeContainer16ErnAuthAPIEvents : NSObject
{
}

- (id)init;
- (void)emitEventOnLogout;
- (void)emitEventOnLoginWithUser:(id)arg1;
- (CDUnknownBlockType)removeOnLogoutEventListenerWithUuid:(id)arg1;
- (CDUnknownBlockType)removeOnLoginEventListenerWithUuid:(id)arg1;
- (id)addOnLogoutEventListenerWithEventListener:(CDUnknownBlockType)arg1;
- (id)addOnLoginEventListenerWithEventListener:(CDUnknownBlockType)arg1;

@end
