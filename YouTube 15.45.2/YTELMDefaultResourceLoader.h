//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ELMResourceLoader.h>

@interface YTELMDefaultResourceLoader : ELMResourceLoader
{
    ELMResourceLoader *_resourceLoader;
    _Bool _isSrsPersistenceEnabled;
}

- (void).cxx_destruct;
- (void)logCacheErrorWithMessage:(id)arg1;
- (_Bool)isSrsPersistenceEnabled;
- (id)getResourceLoader;
- (id)init;

@end
