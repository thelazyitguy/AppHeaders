//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, UAPadding;

@interface UAInAppMessageTextStyle : NSObject
{
    UAPadding *_additionalPadding;
    NSNumber *_letterSpacing;
    NSNumber *_lineSpacing;
}

+ (id)styleWithDictionary:(id)arg1;
+ (id)styleWithAdditionalPadding:(id)arg1 letterSpacing:(id)arg2 lineSpacing:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(retain, nonatomic) NSNumber *letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(retain, nonatomic) UAPadding *additionalPadding; // @synthesize additionalPadding=_additionalPadding;
- (id)initWithAdditionalPadding:(id)arg1 letterSpacing:(id)arg2 lineSpacing:(id)arg3;

@end
