//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class LOCULocationDescriptor, NSMutableArray, NSString, STTSAbbreviation, STTSAddress, STTSCardinal, STTSChemicalFormula, STTSConnector, STTSCrossLingual, STTSDate, STTSDecimal, STTSElectronic, STTSEmoticonEmoji, STTSFraction, STTSMeasure, STTSMoney, STTSMorphosyntacticFeatureVector, STTSOrdinal, STTSProsodicFeatures, STTSSpelling, STTSSynthesizerSelection, STTSTelephone, STTSTime, STTSVerbalInfo, STTSVoiceMod;

@interface STTSSay : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) STTSAbbreviation *abbreviation; // @dynamic abbreviation;
@property(retain, nonatomic) STTSAddress *address; // @dynamic address;
@property(retain, nonatomic) NSMutableArray *audioSourceArray; // @dynamic audioSourceArray;
@property(readonly, nonatomic) unsigned long long audioSourceArray_Count; // @dynamic audioSourceArray_Count;
@property(nonatomic) _Bool bleep; // @dynamic bleep;
@property(retain, nonatomic) STTSCardinal *cardinal; // @dynamic cardinal;
@property(retain, nonatomic) STTSChemicalFormula *chemicalFormula; // @dynamic chemicalFormula;
@property(nonatomic) _Bool conciseEmoji; // @dynamic conciseEmoji;
@property(retain, nonatomic) STTSConnector *connector; // @dynamic connector;
@property(retain, nonatomic) STTSCrossLingual *crossLingual; // @dynamic crossLingual;
@property(retain, nonatomic) STTSDate *date; // @dynamic date;
@property(retain, nonatomic) STTSDecimal *decimal; // @dynamic decimal;
@property(copy, nonatomic) NSString *digit; // @dynamic digit;
@property(retain, nonatomic) STTSElectronic *electronic; // @dynamic electronic;
@property(retain, nonatomic) STTSEmoticonEmoji *emoticonEmoji; // @dynamic emoticonEmoji;
@property(copy, nonatomic) NSString *foreignScript; // @dynamic foreignScript;
@property(retain, nonatomic) STTSFraction *fraction; // @dynamic fraction;
@property(nonatomic) _Bool hasBleep; // @dynamic hasBleep;
@property(nonatomic) _Bool hasConciseEmoji; // @dynamic hasConciseEmoji;
@property(nonatomic) _Bool hasCrossLingual; // @dynamic hasCrossLingual;
@property(nonatomic) _Bool hasForeignScript; // @dynamic hasForeignScript;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasMorphosyntacticFeatures; // @dynamic hasMorphosyntacticFeatures;
@property(nonatomic) _Bool hasNoCelebrity; // @dynamic hasNoCelebrity;
@property(nonatomic) _Bool hasPrefix; // @dynamic hasPrefix;
@property(nonatomic) _Bool hasProsodicFeatures; // @dynamic hasProsodicFeatures;
@property(nonatomic) _Bool hasStructuredFeatures; // @dynamic hasStructuredFeatures;
@property(nonatomic) _Bool hasSuffix; // @dynamic hasSuffix;
@property(nonatomic) _Bool hasSynthesizerSelection; // @dynamic hasSynthesizerSelection;
@property(nonatomic) _Bool hasTextnormLevel; // @dynamic hasTextnormLevel;
@property(nonatomic) _Bool hasTimepointName; // @dynamic hasTimepointName;
@property(nonatomic) _Bool hasVoicemod; // @dynamic hasVoicemod;
@property(retain, nonatomic) NSMutableArray *knowledgeGraphMidArray; // @dynamic knowledgeGraphMidArray;
@property(readonly, nonatomic) unsigned long long knowledgeGraphMidArray_Count; // @dynamic knowledgeGraphMidArray_Count;
@property(copy, nonatomic) NSString *letters; // @dynamic letters;
@property(retain, nonatomic) LOCULocationDescriptor *location; // @dynamic location;
@property(retain, nonatomic) STTSMeasure *measure; // @dynamic measure;
@property(retain, nonatomic) STTSMoney *money; // @dynamic money;
@property(copy, nonatomic) NSString *morphosyntacticFeatures; // @dynamic morphosyntacticFeatures;
@property(nonatomic) _Bool noCelebrity; // @dynamic noCelebrity;
@property(retain, nonatomic) STTSOrdinal *ordinal; // @dynamic ordinal;
@property(nonatomic) float pause; // @dynamic pause;
@property(copy, nonatomic) NSString *prefix; // @dynamic prefix;
@property(retain, nonatomic) STTSProsodicFeatures *prosodicFeatures; // @dynamic prosodicFeatures;
@property(retain, nonatomic) STTSSpelling *spell; // @dynamic spell;
@property(retain, nonatomic) STTSMorphosyntacticFeatureVector *structuredFeatures; // @dynamic structuredFeatures;
@property(copy, nonatomic) NSString *suffix; // @dynamic suffix;
@property(retain, nonatomic) STTSSynthesizerSelection *synthesizerSelection; // @dynamic synthesizerSelection;
@property(retain, nonatomic) STTSTelephone *telephone; // @dynamic telephone;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) int textnormLevel; // @dynamic textnormLevel;
@property(retain, nonatomic) STTSTime *time; // @dynamic time;
@property(copy, nonatomic) NSString *timepointName; // @dynamic timepointName;
@property(retain, nonatomic) STTSVerbalInfo *verbalInfo; // @dynamic verbalInfo;
@property(copy, nonatomic) NSString *verbatim; // @dynamic verbatim;
@property(retain, nonatomic) STTSVoiceMod *voicemod; // @dynamic voicemod;
@property(readonly, nonatomic) int whatToSayOneOfCase; // @dynamic whatToSayOneOfCase;
@property(retain, nonatomic) NSMutableArray *wordSequenceArray; // @dynamic wordSequenceArray;
@property(readonly, nonatomic) unsigned long long wordSequenceArray_Count; // @dynamic wordSequenceArray_Count;
@property(copy, nonatomic) NSString *words; // @dynamic words;

@end
