//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/SUPBaseHelpUnit.h>

@class NSString;

@interface SUPQueryHelpUnit : SUPBaseHelpUnit
{
    NSString *_partialQuery;
}

+ (id)helpUnitFromAutocompleteSuggestionQuery:(id)arg1 partialQuery:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *partialQuery; // @synthesize partialQuery=_partialQuery;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValid;

@end

