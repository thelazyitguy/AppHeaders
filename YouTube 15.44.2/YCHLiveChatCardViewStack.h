//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMutableArray, NSMutableDictionary;

@interface YCHLiveChatCardViewStack : NSObject
{
    GIMMe *_gimme;
    NSMutableArray *_cardIdStack;
    NSMutableDictionary *_cardIdtoViewMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cardIdtoViewMap; // @synthesize cardIdtoViewMap=_cardIdtoViewMap;
@property(retain, nonatomic) NSMutableArray *cardIdStack; // @synthesize cardIdStack=_cardIdStack;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)resetStack;
- (void)refreshCardsVisibility;
- (_Bool)isExistingCardId:(id)arg1;
- (id)topVisibleCardView;
- (void)removeCardViewWithCardId:(id)arg1;
- (void)updateCardView:(id)arg1;
- (void)pushCardView:(id)arg1;
- (id)init;

@end

