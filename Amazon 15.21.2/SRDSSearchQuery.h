//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SRDSReftag;

@interface SRDSSearchQuery : NSObject <NSCopying>
{
    long long _type;
    NSString *_keywords;
    NSString *_event;
    NSString *_searchAlias;
    NSString *_browseNode;
    NSString *_path;
    NSMutableDictionary *_queryStringParams;
    NSString *_barcode;
    NSArray *_asins;
    NSArray *_discriminators;
    SRDSReftag *_reftag;
    NSString *_issResponseId;
    NSString *_sprefix;
    NSString *_visualSearchId;
}

+ (id)keywordsFromPath:(id)arg1;
+ (id)searchKeywordsParameterNames;
@property(retain, nonatomic) NSString *visualSearchId; // @synthesize visualSearchId=_visualSearchId;
@property(retain, nonatomic) NSString *sprefix; // @synthesize sprefix=_sprefix;
@property(retain, nonatomic) NSString *issResponseId; // @synthesize issResponseId=_issResponseId;
@property(retain, nonatomic) SRDSReftag *reftag; // @synthesize reftag=_reftag;
@property(retain, nonatomic) NSArray *discriminators; // @synthesize discriminators=_discriminators;
@property(retain, nonatomic) NSArray *asins; // @synthesize asins=_asins;
@property(retain, nonatomic) NSString *barcode; // @synthesize barcode=_barcode;
@property(retain, nonatomic) NSMutableDictionary *queryStringParams; // @synthesize queryStringParams=_queryStringParams;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *browseNode; // @synthesize browseNode=_browseNode;
@property(retain, nonatomic) NSString *searchAlias; // @synthesize searchAlias=_searchAlias;
@property(retain, nonatomic) NSString *event; // @synthesize event=_event;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToQuery:(id)arg1;
- (_Bool)isEmpty;
- (id)init;

@end
