//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface QCardSFOfferDescriptor : NSObject
{
    _Bool _approved;
    NSString *_annualPercentageRate;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSString *annualPercentageRate; // @synthesize annualPercentageRate=_annualPercentageRate;
@property(readonly, nonatomic, getter=isApproved) _Bool approved; // @synthesize approved=_approved;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCommerceQSFDictionary:(id)arg1;

@end
