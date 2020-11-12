//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKDataSourceSectionProviding-Protocol.h"

@class NSArray, NSString;

@interface GDKCompositeSectionProvider : NSObject <GDKDataSourceSectionProviding>
{
    NSArray *_sections;
    NSArray *_sectionProviders;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *sectionProviders; // @synthesize sectionProviders=_sectionProviders;
- (void)refresh;
- (void)prepare;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (id)initWithSectionProviders:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
