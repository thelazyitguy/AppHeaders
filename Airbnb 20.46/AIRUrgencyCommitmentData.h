//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString, NSURL;

@interface AIRUrgencyCommitmentData : AIRModel
{
    _Bool _hasData;
    NSString *_type;
    NSString *_body;
    NSString *_headline;
    NSURL *_iconURL;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasData; // @synthesize hasData=_hasData;
@property(readonly, copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;

@end

