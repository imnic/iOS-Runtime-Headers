/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class BRCDesiredVersion, BRCItemID, BRCLocalContainer, BRCLocalItem, BRCLocalStatInfo, BRCLocalVersion, NSMutableSet, NSNumber, NSString;

@interface BRCLocalItem : NSObject <BRCSyncThrottleItemProtocol, BRCItem> {
    BRCLocalContainer *_container;
    BRCLocalVersion *_currentVersion;
    unsigned long long _dbRowID;
    BRCDesiredVersion *_desiredVersion;
    BOOL _forceDelete;
    BOOL _forceDeletedAlready;
    NSNumber *_inFlightDiffs;
    NSNumber *_isInDocumentScope;
    BRCItemID *_itemID;
    NSNumber *_knownByServer;
    unsigned long long _localDiffs;
    unsigned long long _notifsRank;
    BRCLocalItem *_orig;
    NSString *_path;
    BOOL _resolvedPath;
    id _serverPathMatchID;
    BRCLocalStatInfo *_st;
    unsigned int _syncUpState;
    long long _transferPriority;
}

@property(readonly) NSString * bookmarkData;
@property(readonly) BRCLocalContainer * container;
@property(readonly) BRCLocalVersion * currentVersion;
@property(readonly) unsigned long long dbRowID;
@property(readonly) BRCDesiredVersion * desiredVersion;
@property(readonly) NSString * digestDescription;
@property(readonly) unsigned int downloadStatus;
@property(readonly) NSString * extension;
@property(readonly) NSString * filename;
@property(readonly) BOOL hasLocalContent;
@property(readonly) NSNumber * inFlightDiffs;
@property(readonly) BOOL isAlias;
@property(readonly) BOOL isDead;
@property(readonly) BOOL isDeadInServerTruth;
@property(readonly) NSNumber * isDeadObj;
@property(readonly) BOOL isDirectory;
@property(readonly) BOOL isDocument;
@property(readonly) NSNumber * isDocumentObj;
@property(readonly) BOOL isDownloadRequested;
@property(readonly) BOOL isFault;
@property(readonly) BOOL isFromInitialScan;
@property(readonly) BOOL isIdleOrRejected;
@property(readonly) BOOL isInDocumentScope;
@property(readonly) BOOL isInTransfer;
@property(readonly) BOOL isKnownByServer;
@property(readonly) BOOL isKnownByServerOrInFlight;
@property(readonly) BOOL isLive;
@property(readonly) BOOL isLost;
@property(readonly) BOOL isOfEvictableSize;
@property(readonly) BOOL isReadAndUploaded;
@property(readonly) BOOL isRejected;
@property(readonly) BOOL isReserved;
@property(retain) BRCItemID * itemID;
@property(readonly) unsigned long long localDiffs;
@property(readonly) BOOL localNameNeedsRename;
@property(readonly) BOOL needsInsert;
@property(readonly) BOOL needsReading;
@property(readonly) BOOL needsSyncUp;
@property(readonly) BOOL needsUpload;
@property(readonly) unsigned long long notifsRank;
@property(readonly) BRCLocalItem * orig;
@property(readonly) NSString * path;
@property(readonly) unsigned int queryItemStatus;
@property(readonly) BRCItemID * serverPathMatchItemID;
@property(readonly) NSMutableSet * setOfContainersIDsWithReverseAliases;
@property(readonly) BRCLocalStatInfo * st;
@property(readonly) unsigned int syncUpState;
@property long long transferPriority;
@property(readonly) unsigned int uploadStatus;

+ (BOOL)parseBookmarkData:(id)arg1 inAccountSession:(id)arg2 itemID:(id*)arg3 containerID:(id*)arg4 error:(id*)arg5;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearInFlightDiffs;
- (BOOL)_deleteFromDB:(id)arg1 diffs:(unsigned long long)arg2;
- (BOOL)_insertInDB:(id)arg1;
- (BOOL)_isInterestingUpdateForNotifsWithDiffs:(unsigned long long)arg1;
- (void)_markLostWhenReplacedByItem:(id)arg1 backoffMode:(unsigned char)arg2;
- (void)_markNeedsSyncingUp;
- (BOOL)_nukeVersionsFromDB:(id)arg1;
- (BOOL)_saveToDB:(id)arg1 diffs:(unsigned long long)arg2;
- (id)_scheduleLosersDownloadForVersion:(id)arg1;
- (void)_sendNotificationIfNeededWithDiffs:(unsigned long long)arg1 regather:(BOOL)arg2;
- (id)_setOfParentIDs;
- (void)appDidResolveConflictLoserWithEtag:(id)arg1;
- (void)applyMetadataOnFileID:(unsigned long long)arg1 liveFD:(unsigned long long)arg2;
- (void)beginBounceAndSaveToDBWithName:(id)arg1;
- (id)bookmarkData;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (void)clearFromStage;
- (void)clearVersionSignatures:(unsigned int)arg1 isPackage:(BOOL)arg2;
- (void)clearVersionToStage;
- (struct PQLResultSet { Class x1; }*)conflictLosersNeedingDownloadEnumerator;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countOfStagedConflictLosers;
- (id)currentVersion;
- (unsigned long long)dbRowID;
- (id)debugDescription;
- (void)deleteAllDesiredAdditions;
- (void)deleteAllDesiredLosers;
- (void)deleteForRescheduleOfItem:(id)arg1;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (id)desiredLoserForEtag:(id)arg1;
- (id)desiredThumbnail;
- (id)desiredVersion;
- (void)didApplyChangesFromItem:(id)arg1;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (unsigned long long)diffAgainstOriginalItem;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (id)digestDescription;
- (unsigned int)downloadStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)extension;
- (id)filename;
- (BOOL)finishPackageStageWithManifestID:(id)arg1;
- (void)fixupStagedItemAtStartup;
- (void)forceScanParent;
- (void)forceUpdateNotification;
- (void)forceVersionConflictByClearkingCKInfo;
- (void)forceiWorkConflictEtag:(id)arg1;
- (BOOL)hasDeadChildren;
- (BOOL)hasLocalContent;
- (BOOL)hasLostChildren;
- (BOOL)hasStagedThumbnail;
- (id)inFlightDiffs;
- (id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalItem:(id)arg1;
- (id)initWithRelativePath:(id)arg1 parentID:(id)arg2;
- (id)initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (BOOL)isAlias;
- (BOOL)isDead;
- (BOOL)isDeadInServerTruth;
- (id)isDeadObj;
- (BOOL)isDirectory;
- (BOOL)isDocument;
- (id)isDocumentObj;
- (BOOL)isDownloadRequested;
- (BOOL)isFault;
- (BOOL)isFromInitialScan;
- (BOOL)isIdleOrRejected;
- (BOOL)isInDocumentScope;
- (BOOL)isInDocumentScopeWithParent:(id)arg1;
- (BOOL)isInTransfer;
- (BOOL)isKnownByServer;
- (BOOL)isKnownByServerOrInFlight;
- (BOOL)isLive;
- (BOOL)isLost;
- (BOOL)isOfEvictableSize;
- (BOOL)isReadAndUploaded;
- (BOOL)isRejected;
- (BOOL)isReserved;
- (id)itemID;
- (unsigned long long)localDiffs;
- (BOOL)localNameNeedsRename;
- (void)markBounceFailed;
- (void)markBounceFinished;
- (unsigned int)markChildrenLost;
- (void)markDead;
- (void)markForceNeedsSyncUp;
- (void)markForceUpload;
- (void)markLatestRequestAcknowledged;
- (void)markLatestSyncRequestFailed;
- (void)markLatestSyncRequestRejected;
- (void)markLiveFromStage;
- (void)markLostClearGenerationID:(BOOL)arg1 backoffMode:(unsigned char)arg2;
- (void)markLostDirectoryAsAlmostDead;
- (void)markLostWhenReplacedByItem:(id)arg1;
- (void)markLostWithoutBackoff;
- (void)markNeedsReading;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;
- (void)markOverQuotaWithError:(id)arg1;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)arg1;
- (void)markRenamedUsingServerItem:(id)arg1 parentFileID:(id)arg2;
- (void)markReserved;
- (void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned int)arg2 documentID:(unsigned int)arg3;
- (void)markStagedWithFileID:(unsigned long long)arg1 generationID:(unsigned int)arg2;
- (void)markUploadedWithRecord:(id)arg1;
- (void)moveAsideLocally;
- (BOOL)moveDocumentToStageFromDownloadPath:(id)arg1;
- (BOOL)needsInsert;
- (BOOL)needsReading;
- (BOOL)needsSyncUp;
- (BOOL)needsUpload;
- (unsigned long long)notifsRank;
- (id)orig;
- (id)parentItem;
- (id)path;
- (void)postponeApplyChangesFromItem:(id)arg1;
- (void)prepareForSyncUp;
- (unsigned int)queryItemStatus;
- (void)refreshDesiredVersion:(id)arg1;
- (void)refreshLosersListIfNeededAtPath:(id)arg1;
- (BOOL)saveToDBForServerEdit:(BOOL)arg1;
- (id)serverPathMatchItemID;
- (void)setItemID:(id)arg1;
- (id)setOfContainersIDsWithReverseAliases;
- (void)setTransferPriority:(long long)arg1;
- (BOOL)setVersionToStage:(id)arg1 wantsFault:(BOOL)arg2 startDownload:(BOOL)arg3 needsSave:(BOOL*)arg4;
- (id)st;
- (unsigned int)syncUpState;
- (long long)transferPriority;
- (void)triggerTransferNotificationIfNeeded;
- (void)unstageDesiredLosers;
- (void)updateContentsCKInfoAndDeviceIDFromServerItem:(id)arg1;
- (BOOL)updateFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (void)updateStatMetadataFromServerItem:(id)arg1;
- (void)updateStructuralCKInfoFromServerItem:(id)arg1;
- (void)updateVersionMetadataFromServerItem:(id)arg1;
- (BOOL)updateXattrInfoFromPathPath:(id)arg1 error:(id*)arg2;
- (unsigned int)uploadStatus;
- (BOOL)validateLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

@end
