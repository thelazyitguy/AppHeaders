//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString;

@interface AIRIncentive : AIRModel
{
    NSString *_type;
    NSString *_title;
    NSString *_incentiveDescription;
    NSString *_memory;
}

+ (id)idAttributeName;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *memory; // @synthesize memory=_memory;
@property(readonly, copy, nonatomic) NSString *incentiveDescription; // @synthesize incentiveDescription=_incentiveDescription;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;

@end
