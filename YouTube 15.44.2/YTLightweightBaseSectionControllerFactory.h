//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSDictionary;

@interface YTLightweightBaseSectionControllerFactory : NSObject
{
    NSDictionary *_supportedClassMap;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)supportedClassMap;
- (_Bool)isSupportedEntryClassName:(id)arg1;
- (Class)sectionTypeForEntryClassName:(id)arg1;
- (id)controllerForSectionRenderer:(id)arg1 service:(id)arg2 cellFactory:(id)arg3 parentResponder:(id)arg4;
- (id)init;

@end

