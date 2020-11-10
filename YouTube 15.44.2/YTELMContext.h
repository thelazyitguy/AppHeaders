//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ELMContext-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class NSString;
@protocol ELMClientResourceLoader, ELMDispatcher, ELMErrorHandler, ELMFontLoader, ELMImageDownloader, ELMImageSelectionHandler, ELMInteractionLogger, ELMJSEnvironment, ELMLogger, ELMPerformanceAgent, ELMPriorityLoader, ELMRuntimeConfig, ELMStore, ELMTemplateLoader, YTResponder;

@interface YTELMContext : NSObject <ELMContext, YTResponder>
{
    id <ELMPerformanceAgent> _agent;
    id <ELMRuntimeConfig> _runtimeConfig;
    id <ELMDispatcher> _dispatcher;
    id <ELMLogger> _logger;
    id <ELMImageSelectionHandler> _imageSelectionHandler;
    id <YTResponder> _parentResponder;
    id <ELMInteractionLogger> _interactionLogger;
}

- (void).cxx_destruct;
@property(readonly) id <ELMInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(readonly) id <ELMPerformanceAgent> performanceAgent;
@property(readonly) id <ELMPriorityLoader> priorityLoader;
@property(readonly) id <ELMImageDownloader> imageDownloader;
@property(readonly) id <ELMTemplateLoader> templateLoader;
@property(readonly) id <ELMJSEnvironment> jsEnvironment;
@property(readonly) id <ELMErrorHandler> errorHandler;
@property(readonly) id <ELMLogger> logger;
@property(readonly) id <ELMDispatcher> dispatcher;
@property(readonly) id <ELMRuntimeConfig> runtimeConfig;
@property(readonly) id <ELMImageSelectionHandler> imageSelectionHandler;
@property(readonly) id <ELMFontLoader> fontLoader;
@property(readonly) id <ELMClientResourceLoader> clientResourceLoader;
@property(readonly) id <ELMStore> store;
- (id)initWithResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

