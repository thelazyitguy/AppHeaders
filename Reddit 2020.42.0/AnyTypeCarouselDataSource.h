//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarouselDataSource-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString;
@protocol TemplateParserContext;

@interface AnyTypeCarouselDataSource : NSObject <CarouselDataSource>
{
    id <TemplateParserContext> _templateContext;
    NSError *_lastError;
    NSArray *_carouselItems;
    NSDictionary *_analytics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *analytics; // @synthesize analytics=_analytics;
@property(copy, nonatomic) NSArray *carouselItems; // @synthesize carouselItems=_carouselItems;
@property(readonly, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(readonly, nonatomic) __weak id <TemplateParserContext> templateContext; // @synthesize templateContext=_templateContext;
- (_Bool)hasMoreContent;
- (void)filterCarouselItems;
- (void)fetchCarouselItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPostFlairObjects:(id)arg1;
- (id)initWithCarouselItemObjects:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

