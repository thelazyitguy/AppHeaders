//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIFormattedString, YTIRenderer;

@interface YTIUnpluggedOnboardingShoppingPageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *actionableMessage; // @dynamic actionableMessage;
@property(retain, nonatomic) YTIRenderer *cart; // @dynamic cart;
@property(retain, nonatomic) YTIRenderer *cartSummary; // @dynamic cartSummary;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(retain, nonatomic) YTIRenderer *elementsContent; // @dynamic elementsContent;
@property(nonatomic) _Bool hasActionableMessage; // @dynamic hasActionableMessage;
@property(nonatomic) _Bool hasCart; // @dynamic hasCart;
@property(nonatomic) _Bool hasCartSummary; // @dynamic hasCartSummary;
@property(nonatomic) _Bool hasElementsContent; // @dynamic hasElementsContent;
@property(nonatomic) _Bool hasMiniCart; // @dynamic hasMiniCart;
@property(nonatomic) _Bool hasPrimaryText; // @dynamic hasPrimaryText;
@property(nonatomic) _Bool hasSecondaryText; // @dynamic hasSecondaryText;
@property(retain, nonatomic) YTIRenderer *miniCart; // @dynamic miniCart;
@property(retain, nonatomic) YTIFormattedString *primaryText; // @dynamic primaryText;
@property(retain, nonatomic) YTIFormattedString *secondaryText; // @dynamic secondaryText;
@property(retain, nonatomic) NSMutableArray *stepsArray; // @dynamic stepsArray;
@property(readonly, nonatomic) unsigned long long stepsArray_Count; // @dynamic stepsArray_Count;

@end

