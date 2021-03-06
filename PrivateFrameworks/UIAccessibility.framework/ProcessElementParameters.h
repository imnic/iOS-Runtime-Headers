/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface ProcessElementParameters : NSObject {
    BOOL _didCutOffElements;
    BOOL _forSpeakThis;
    BOOL _grouped;
    unsigned int _maximumNumberOfElements;
    BOOL _onlyIncludeVisible;
    id _shouldAddElement;
}

@property BOOL didCutOffElements;
@property BOOL forSpeakThis;
@property BOOL grouped;
@property unsigned int maximumNumberOfElements;
@property BOOL onlyIncludeVisible;
@property(copy) id shouldAddElement;

- (void)dealloc;
- (BOOL)didCutOffElements;
- (BOOL)forSpeakThis;
- (BOOL)grouped;
- (unsigned int)maximumNumberOfElements;
- (BOOL)onlyIncludeVisible;
- (void)setDidCutOffElements:(BOOL)arg1;
- (void)setForSpeakThis:(BOOL)arg1;
- (void)setGrouped:(BOOL)arg1;
- (void)setMaximumNumberOfElements:(unsigned int)arg1;
- (void)setOnlyIncludeVisible:(BOOL)arg1;
- (void)setShouldAddElement:(id)arg1;
- (id)shouldAddElement;

@end
