//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ALXActionHandler-Protocol.h"

@class MALXAlexaShoppingNavigator, NSString;

@interface MALXLocalApplicationActionHandler : NSObject <ALXActionHandler>
{
    MALXAlexaShoppingNavigator *_shoppingNavigator;
}

@property(retain, nonatomic) MALXAlexaShoppingNavigator *shoppingNavigator; // @synthesize shoppingNavigator=_shoppingNavigator;
- (void).cxx_destruct;
- (void)handleAction:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithShoppingNavigator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
