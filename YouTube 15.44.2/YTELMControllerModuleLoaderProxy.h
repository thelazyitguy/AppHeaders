//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ELMControllerModuleLoader-Protocol.h>
#import <Module_Framework/ELMJSPreloader-Protocol.h>

@class ELMJSController, ELMResourcePreloader;

@interface YTELMControllerModuleLoaderProxy : NSObject <ELMControllerModuleLoader, ELMJSPreloader>
{
    ELMJSController *_jsController;
    ELMResourcePreloader *_resourcePreloader;
}

- (void).cxx_destruct;
- (id)ensureLoaded:(id)arg1;
- (id)loadModule:(id)arg1 moduleDependencies:(id)arg2;
- (void)setResourceLoader:(id)arg1;
- (id)initWithJSController:(id)arg1;

@end

