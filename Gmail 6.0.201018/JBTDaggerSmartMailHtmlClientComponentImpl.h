//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTSmartMailHtmlClientComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface JBTDaggerSmartMailHtmlClientComponentImpl : NSObject <JBTSmartMailHtmlClientComponentImpl>
{
    id <JavaxInjectProvider> getDateTimeFormatterProvider_;
    id <JavaxInjectProvider> getTripsHelperAdapterProvider_;
    id <JavaxInjectProvider> tripsHelperProvider_;
    id <JavaxInjectProvider> getTimeServiceProvider_;
    id <JavaxInjectProvider> formattedTimeConverterProvider_;
    id <JavaxInjectProvider> smartMailHtmlRendererHelperProvider_;
    id <JavaxInjectProvider> getHtmlRendererProvider_;
    id <JavaxInjectProvider> genericSmartMailHtmlRendererImplProvider_;
}

- (void)dealloc;
- (id)getGenericSmartMailHtmlRenderer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

