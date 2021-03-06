//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKDataSourceSection, GDKDataSourceSectionStyle, GDKSettableObservable;
@protocol GOOContentViewObject;

@interface GDKSettableDataSourceSection : NSObject
{
    GDKDataSourceSection *_section;
    id <GOOContentViewObject> _initialContent;
    GDKDataSourceSectionStyle *_style;
    GDKSettableObservable *_settableSection;
}

+ (id)initiallyEmptySectionWithStyle:(id)arg1;
+ (id)initiallyEmptySection;
- (void).cxx_destruct;
@property(readonly, nonatomic) GDKSettableObservable *settableSection; // @synthesize settableSection=_settableSection;
@property(readonly, nonatomic) GDKDataSourceSectionStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) id <GOOContentViewObject> initialContent; // @synthesize initialContent=_initialContent;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)setContent:(id)arg1;
@property(readonly, nonatomic) GDKDataSourceSection *section; // @synthesize section=_section;
- (id)initWithInitialContent:(id)arg1 style:(id)arg2;
- (id)initWithInitialContent:(id)arg1;

@end

