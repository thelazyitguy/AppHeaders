//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC25PageLoaderViewFeatureImpl35PageLoaderViewServiceImplementation : NSObject
{
    // Error parsing type: , name: _settingsService
    // Error parsing type: , name: _containerUIService
    // Error parsing type: , name: _glueService
    // Error parsing type: , name: _performanceMetricsService
    // Error parsing type: , name: _networkService
    // Error parsing type: , name: _uriDispatchService
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)provideHubLoadableWithViewModelProvider:(id)arg1;
- (id)providePageLoaderViewWithPageIdentifier:(id)arg1 pageURI:(id)arg2 loadable:(id)arg3 onLoaded:(CDUnknownBlockType)arg4;
- (id)providePageLoaderViewWithPageIdentifier:(id)arg1 pageURI:(id)arg2 pageLoader:(id)arg3 options:(id)arg4 onLoaded:(CDUnknownBlockType)arg5;
- (id)providePageLoaderWithLoadable:(id)arg1;
- (void)load;

@end
