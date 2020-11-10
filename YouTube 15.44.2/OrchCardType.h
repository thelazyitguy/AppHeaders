//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, OrchImageWithCaption;

@interface OrchCardType : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *binRangeArray; // @dynamic binRangeArray;
@property(readonly, nonatomic) unsigned long long binRangeArray_Count; // @dynamic binRangeArray_Count;
@property(copy, nonatomic) NSString *cvcHintHeader; // @dynamic cvcHintHeader;
@property(retain, nonatomic) OrchImageWithCaption *cvcHintImage; // @dynamic cvcHintImage;
@property(copy, nonatomic) NSString *cvcHintImageUri; // @dynamic cvcHintImageUri;
@property(copy, nonatomic) NSString *cvcHintText; // @dynamic cvcHintText;
@property(nonatomic) int cvcLength; // @dynamic cvcLength;
@property(nonatomic) _Bool hasCvcHintHeader; // @dynamic hasCvcHintHeader;
@property(nonatomic) _Bool hasCvcHintImage; // @dynamic hasCvcHintImage;
@property(nonatomic) _Bool hasCvcHintImageUri; // @dynamic hasCvcHintImageUri;
@property(nonatomic) _Bool hasCvcHintText; // @dynamic hasCvcHintText;
@property(nonatomic) _Bool hasCvcLength; // @dynamic hasCvcLength;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIconUri; // @dynamic hasIconUri;
@property(nonatomic) _Bool hasTypeToken; // @dynamic hasTypeToken;
@property(nonatomic) _Bool hasUndeterminedIcon; // @dynamic hasUndeterminedIcon;
@property(retain, nonatomic) OrchImageWithCaption *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *iconUri; // @dynamic iconUri;
@property(copy, nonatomic) NSData *typeToken; // @dynamic typeToken;
@property(retain, nonatomic) OrchImageWithCaption *undeterminedIcon; // @dynamic undeterminedIcon;

@end

