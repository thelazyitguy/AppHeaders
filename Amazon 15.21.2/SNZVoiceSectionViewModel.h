//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface SNZVoiceSectionViewModel : NSObject
{
    NSAttributedString *_header;
    NSAttributedString *_example;
}

+ (id)sectionViewModelsWithSections:(id)arg1 type:(unsigned long long)arg2;
@property(readonly, nonatomic) NSAttributedString *example; // @synthesize example=_example;
@property(readonly, nonatomic) NSAttributedString *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)initWithSection:(id)arg1 type:(unsigned long long)arg2;

@end

