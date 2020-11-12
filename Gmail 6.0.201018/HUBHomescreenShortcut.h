//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIApplicationShortcutItem;
@protocol GIPAccountID;

@interface HUBHomescreenShortcut : NSObject
{
    int _guestOwner;
    UIApplicationShortcutItem *_shortcutItem;
    id <GIPAccountID> _accountID;
    long long _shortcutType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int guestOwner; // @synthesize guestOwner=_guestOwner;
@property(readonly, nonatomic) long long shortcutType; // @synthesize shortcutType=_shortcutType;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) UIApplicationShortcutItem *shortcutItem; // @synthesize shortcutItem=_shortcutItem;
- (id)initWithShortcutItem:(id)arg1 accountID:(id)arg2 shortcutType:(long long)arg3 guestOwner:(int)arg4;

@end
