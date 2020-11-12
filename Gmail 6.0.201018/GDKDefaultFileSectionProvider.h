//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKFileSectionProviding-Protocol.h"

@class NSArray, NSString;

@interface GDKDefaultFileSectionProvider : NSObject <GDKFileSectionProviding>
{
    NSArray *_sections;
}

+ (id)searchTitle;
+ (id)defaultTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (id)sectionsForSort:(id)arg1;
- (id)initWithParams:(id)arg1 thumbnailCache:(id)arg2 sectionTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
