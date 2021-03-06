//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface BTPayPalLineItem : NSObject
{
    NSString *_quantity;
    NSString *_unitAmount;
    NSString *_name;
    long long _kind;
    NSString *_unitTaxAmount;
    NSString *_itemDescription;
    NSString *_productCode;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(copy, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(copy, nonatomic) NSString *unitTaxAmount; // @synthesize unitTaxAmount=_unitTaxAmount;
@property(readonly, nonatomic) long long kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *unitAmount; // @synthesize unitAmount=_unitAmount;
@property(readonly, copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
- (id)requestParameters;
- (id)initWithQuantity:(id)arg1 unitAmount:(id)arg2 name:(id)arg3 kind:(long long)arg4;

@end

