//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, STKXMLVASTInLineModel;

@interface STKNASTAd : NSObject
{
    NSArray *_impressionTrackers;
    NSArray *_finishTrackers;
    NSArray *_clickThrough;
    NSArray *_clickTrackers;
    NSString *_title;
    NSString *_descriptionText;
    NSString *_callToAction;
    NSNumber *_starRating;
    NSString *_iconURLString;
    NSString *_mainURLString;
    NSString *_rawVAST;
    STKXMLVASTInLineModel *_VASTInLineModel;
    NSDictionary *_customParams;
}

+ (void)parseJSON:(id)arg1 comparator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *customParams; // @synthesize customParams=_customParams;
@property(retain, nonatomic) STKXMLVASTInLineModel *VASTInLineModel; // @synthesize VASTInLineModel=_VASTInLineModel;
@property(readonly, nonatomic) NSString *rawVAST; // @synthesize rawVAST=_rawVAST;
@property(readonly, nonatomic) NSString *mainURLString; // @synthesize mainURLString=_mainURLString;
@property(readonly, nonatomic) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
@property(readonly, copy, nonatomic) NSNumber *starRating; // @synthesize starRating=_starRating;
@property(readonly, copy, nonatomic) NSString *callToAction; // @synthesize callToAction=_callToAction;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *clickTrackers; // @synthesize clickTrackers=_clickTrackers;
@property(readonly, nonatomic) NSArray *clickThrough; // @synthesize clickThrough=_clickThrough;
@property(readonly, nonatomic) NSArray *finishTrackers; // @synthesize finishTrackers=_finishTrackers;
@property(readonly, nonatomic) NSArray *impressionTrackers; // @synthesize impressionTrackers=_impressionTrackers;
- (unsigned long long)assetTypeById:(id)arg1 comparator:(id)arg2;
- (CDUnknownBlockType)populateFromVASTTag;
- (id)initWithJSON:(id)arg1 comparator:(id)arg2;

@end
